class Solution {
    public:
        vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
            vector<vector<int>> result;
            int i = 0, j = 0;
            
            while (i < nums1.size() && j < nums2.size()) {
                if (nums1[i][0] < nums2[j][0]) {
                    result.push_back(nums1[i]);
                    i++;
                } else if (nums1[i][0] > nums2[j][0]) {
                    result.push_back(nums2[j]);
                    j++;
                } else {
                    result.push_back({nums1[i][0], nums1[i][1] + nums2[j][1]});
                    i++;
                    j++;
                }
            }
            
            
            while (i < nums1.size()) {
                result.push_back(nums1[i]);
                i++;
            }
            
            
            while (j < nums2.size()) {
                result.push_back(nums2[j]);
                j++;
            }
            
            return result;
        }
    };
    







    \cventry
    {Gesture Controlled Virtual Mouse \textnormal{ | Python, OpenCV, MediaPipe, CNN, Pybind11, Machine Learning}}
    {\href{https://github.com/parag477/Sahayak}{Source Code}}
    {
      \begin{cvitems}
        \item {Developed a contactless virtual mouse system enabling users to control a computer using hand gestures and voice commands.}
        \item {Integrate MeadiaPipe's Hand Detection model with CNN-based tracking for precise input processing.}
          \item {Implement state-of-the-art Machine Learning and Computer Vision algorithms for real-time gesture recognition.}
      \end{cvitems}
    }
