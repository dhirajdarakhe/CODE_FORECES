vector<vector<int>> merge(vector<vector<int>> &i)
{

    vector<vector<int>> i;
    int n = startX.size();
    for(int k = 0; k < n; ++k)
    {
        vector<int> l = {startX[k], endX[k]};
        i.push_nack(l);
    }
    sort(i.begin(), i.end());
    vector<vector<int>> x;
    for (auto c : i)
    {
        if (x.empty() || x.back()[1] < c[0])
            x.push_back(c);
        else
            x.back()[1] = max(x.back()[1], c[1]);
    }
    return x.size();
}