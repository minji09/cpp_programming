vector<int> diff;
	diff.resize(v1.size()+v2.size());
	auto iter = set_difference(v1.begin(),v1.end(), v2.begin(), v2.end(), diff.begin());
	diff.erase(iter,diff.end());
	cout << diff.size() << " ";
	for_each(diff.begin(), diff.end(), [](int i){cout << i << " ";});
	cout << endl;