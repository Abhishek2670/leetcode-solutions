class Solution {
   public:
    bool containsDuplicate(vector<int>& nums) {
        // One bit per value in [-1e9, 1e9], about 250 MB. Allocated once and
        // reused across calls; the OS zeroes each page on first touch.
        constexpr size_t offset = 1e9;
        constexpr size_t input_space_sz = 2 * 1e9 + 1; // [-1e9, 1e9]
        constexpr size_t nb_ull = (input_space_sz + sizeof(uint64_t) - 1) / sizeof(uint64_t); // round up
        static uint64_t* bitmap = static_cast<uint64_t*>(calloc(nb_ull, sizeof(uint64_t)));

        size_t i = 0;
        for (; i < nums.size(); ++i) {
            size_t n = nums[i] + offset;         // maps -1e9 -> 0
            size_t word_idx = n >> 6;            // find the word in the bitmap. i >> 6 is i / 64
            uint64_t mask = 1ull << (n & 63);    // find the bit in the word.    i & 63 is i % 64 
            if (bitmap[n >> 6] & mask) break;    // duplicate, don't return but clean up first
            bitmap[n >> 6] |= mask;
        }

        // Every set bit lives in a word touched by nums[0..k), so zeroing
        // those words leaves the bitmap clean for the next call.
        for (size_t j = 0; j < i; ++j) bitmap[(nums[j] + offset) >> 6] = 0;

        return i != nums.size();
    }
};