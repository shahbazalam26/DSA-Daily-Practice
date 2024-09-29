// https://www.naukri.com/code360/problems/permutations-of-a-string_985254


int partition(vector<string>& arr, int low, int high) {
    string pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(vector<string>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void sort(vector<string>& arr) {
    quickSort(arr, 0, arr.size() - 1);
}
    
void solve(string str, vector<string>& ans, int index) {
    if (index >= str.length()) {
        ans.push_back(str);
        return;
    }

    for (int i = index; i < str.length(); i++) {
        swap(str[i], str[index]);
        solve(str, ans, index + 1);
        swap(str[i], str[index]);
    }
}

vector<string> generatePermutations(string &str)
{
    vector<string>ans;
    int index = 0;
    solve(str,ans,index);
    sort(ans);
    return ans;
}