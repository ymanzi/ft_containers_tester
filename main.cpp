#include "main_header.hpp"
#include <string>

#define P(x) std::cout << std::boolalpha << x << std::endl

template< class T>
void	show_container(T& l)
{
	std::cout << "Container =( ";
	for (typename T::iterator it = l.begin(); it != l.end(); it++)
		std::cout << *it << " << ";
	std::cout << ")" << std::endl;
}

template< class T>
void	show_map(T& l)
{
	std::cout << "Map =( ";
	for (typename T::iterator it = l.begin(); it != l.end(); it++)
		std::cout << it->first << " - " << it->second << " << ";
	std::cout << ")" << std::endl;
}

template <class T, class K>
bool	compare_container(T & t, K & k)
{
	(void)t;
	(void)k;
	typename T::iterator it = t.begin();
	typename K::iterator jt = k.begin();

	if (t.size() == 0 && t.size() == k.size())
		return (true);
	else if (t.size() == 0)
		return (false);
	for ( ;it != t.end() && jt != k.end(); it++)
	{
		if (*it != *jt)
			return (false);
		jt++;
	}
	return (true);
}

template <class T, class K>
bool	compare_map(T & t, K & k)
{
	(void)t;
	(void)k;
	typename T::iterator it = t.begin();
	typename K::iterator jt = k.begin();

	for ( ;it != t.end() && jt != k.end(); it++)
	{
		if (it->first != jt->first || it->second != jt->second)
			return (false);
		jt++;
	}
	return (true);
}

std::string verif(bool elem)
{
	return (" Verif: " + std::to_string(elem));
}

void t_stack(void)
{
	ft::stack<std::string> f;
	ft::stack<std::string> f2;
	std::stack<std::string> s;
	std::stack<std::string> s2;

	P("~~~~~~~~~~~~~~~ STACK ~~~~~~~~~~~~~~~----");
	P("---------> empty <----");
	P("empty ? " << s.empty() << verif(s.empty() == f.empty()) );
	P("size = " << s.size() << verif(s.size() == f.size()) );

	P("---------> push <----");
	s.push("one");
	f.push("one");
	P("top = " << s.top() << verif(s.top() == f.top()) );
	P("empty ? " << s.empty() << verif(s.empty() == f.empty()) );
	P("size = " << s.size() << verif(s.size() == f.size()) );

	P("---------> pop <----");
	s.pop();
	f.pop();
	P("empty ? " << s.empty() << verif(s.empty() == f.empty()) );
	P("size = " << s.size() << verif(s.size() == f.size()) );

	P("~~~~~~~~~~~~~~~----> Test Operator <-------------");
	s.push("deux");
	f.push("deux");

	P("---------> operator == <----");
	P("operator '==' : " << (s == s2) << verif((s == s2) == (f == f2)));

	P("---------> operator != <----");
	P("operator '!=' : " << (s != s2) << verif((s != s2) == (f != f2)));

	P("---------> operator < <----");
	P("operator '<' : " << (s < s2) << verif((s < s2) == (f < f2)));

	P("---------> operator <= <----");
	P("operator '<=' : " << (s <= s2) << verif((s <= s2) == (f <= f2)));

	P("---------> operator > <----");
	P("operator '>' : " << (s > s2) << verif((s > s2) == (f > f2)));

	P("---------> operator >= <----");
	P("operator '>=' : " << (s >= s2) << verif((s >= s2) == (f >= f2)));
}

void t_queue(void)
{
	ft::queue<std::string> f;
	ft::queue<std::string> f2;
	std::queue<std::string> s;
	std::queue<std::string> s2;

	P("~~~~~~~~~~~~~~~ QUEUE ~~~~~~~~~~~~~~~----");
	P("---------> empty <----");
	P("empty ? " << s.empty() << verif(s.empty() == f.empty()) );
	P("size = " << s.size() << verif(s.size() == f.size()) );

	P("---------> push - front - back <----");
	s.push("one");
	s.push("two");
	f.push("one");
	f.push("two");
	P("front = " << s.front() << verif(s.front() == f.front()) );
	P("back = " << s.back() << verif(s.back() == f.back()) );
	P("empty ? " << s.empty() << verif(s.empty() == f.empty()) );
	P("size = " << s.size() << verif(s.size() == f.size()) );

	P("---------> pop <----");
	s.pop();
	f.pop();
	P("front = " << s.front() << verif(s.front() == f.front()) );
	P("back = " << s.back() << verif(s.back() == f.back()) );
	P("empty ? " << s.empty() << verif(s.empty() == f.empty()) );
	P("size = " << s.size() << verif(s.size() == f.size()) );

	P("~~~~~~~~~~~~~~~----> Test Operator <-------------");
	s.push("deux");
	f.push("deux");

	P("---------> operator == <----");
	P("operator '==' : " << (s == s2) << verif((s == s2) == (f == f2)));

	P("---------> operator != <----");
	P("operator '!=' : " << (s != s2) << verif((s != s2) == (f != f2)));

	P("---------> operator < <----");
	P("operator '<' : " << (s < s2) << verif((s < s2) == (f < f2)));

	P("---------> operator <= <----");
	P("operator '<=' : " << (s <= s2) << verif((s <= s2) == (f <= f2)));

	P("---------> operator > <----");
	P("operator '>' : " << (s > s2) << verif((s > s2) == (f > f2)));

	P("---------> operator >= <----");
	P("operator '>=' : " << (s >= s2) << verif((s >= s2) == (f >= f2)));
}

void t_list(void)
{
	ft::list<std::string>	f;
	std::list<std::string>	s;
	
	P("~~~~~~~~~~~~~~~ LIST ~~~~~~~~~~~~~~~");
	P("---------> empty <----");
	P("empty ? " << s.empty() << verif(s.empty() == f.empty()) );
	P("size = " << s.size() << verif(s.size() == f.size()) );

	P("---------> push_front <----");
	s.push_front("one");
	s.push_front("two");
	s.push_front("three");
	s.push_front("four");

	f.push_front("one");
	f.push_front("two");
	f.push_front("three");
	f.push_front("four");
	// show_container(f);
	P(verif( compare_container(s, f) ));
	P("size = " << s.size() << verif(s.size() == f.size()) );

	P("---------> push_back <----");
	s.push_back("un");
	s.push_back("deux");
	s.push_back("trois");
	s.push_back("quatre");
	s.push_back("un");
	s.push_back("deux");
	s.push_back("trois");
	s.push_back("quatre");

	f.push_back("un");
	f.push_back("deux");
	f.push_back("trois");
	f.push_back("quatre");
	f.push_back("un");
	f.push_back("deux");
	f.push_back("trois");
	f.push_back("quatre");
	// show_container(f);
	P(verif( compare_container(s, f) ));
	P("size = " << s.size() << verif(s.size() == f.size()) );

	P("---------> Front <----");
	P("front = " << s.front() << verif(s.front() == f.front()) );

	P("---------> Back <----");
	P("Back = " << s.back() << verif(s.back() == f.back()) );

	P("---------> Iterator constructor <----");
	ft::list<std::string>	f2(f.begin(), f.end());
	std::list<std::string>	s2(s.begin(), s.end());

	P(verif( compare_container(s2, f2) ));
	P("---------> Pop_Front <----");
	s.pop_front();
	f.pop_front();
	P(verif( compare_container(s, f) ));

	P("---------> Pop_Back <----");
	s.pop_back();
	f.pop_back();
	P(verif( compare_container(s, f) ));

	P("---------> remove <----");
	s.remove("trois");
	s.remove("three");
	f.remove("trois");
	f.remove("three");
	P(verif( compare_container(s, f) ));
	
	P("---------> resize (10) <----");
	s.resize(10);
	f.resize(10);
	P("size = " << s.size() << verif(s.size() == f.size()) );

	P("---------> resize (5) <----");
	s.resize(5);
	f.resize(5);
	P("size = " << s.size() << verif(s.size() == f.size()) );

	P("---------> sort <----");
	s.sort();
	f.sort();
	P(verif( compare_container(s, f) ));

	P("---------> merge <----");
	s2.sort();
	f2.sort();
	s.merge(s2);
	f.merge(f2);
	P(verif( compare_container(s, f) ));
	P(verif(compare_container(s2, f2)));
	
	P("---------> erase <----");
	ft::list<std::string>::iterator fi, fi2;
	std::list<std::string>::iterator si, si2;

	si = s.begin();
	si++;
	si2 = si;
	si2++;
	s.erase(si, si2);

	fi = f.begin();
	fi++;
	fi2 = fi;
	fi2++;
	f.erase(fi, fi2);

	P(verif( compare_container(s, f) ));
	P("---------> reverse <----");
	s.reverse();
	f.reverse();
	P(verif( compare_container(s, f) ));

	P("---------> splice <----");
	s.splice(s.end(), s2, ++(s2.begin()));
	f.splice(f.end(), f2, ++(f2.begin()));
	P(verif(compare_container(s, f)));
	P(verif(compare_container(s2, f2)));

	P("---------> swap  <----");
	s.swap(s2);
	f.swap(f2);
	P(verif(compare_container(s, f)));
	P(verif(compare_container(s2, f2)));

	P("---------> insert <----");
	si = s.begin();
	si++;
	++si;
	s.insert(si, "lol2");
	s.insert(si, "lol2");
	s.insert(si, "lol2");
	si++;
	s.insert(si, "lol1");
	s.insert(si, "lol1");
	s2.insert(s2.begin(), s.begin(), si);

	fi = f.begin();
	fi++;
	++fi;
	f.insert(fi, "lol2");
	f.insert(fi, "lol2");
	f.insert(fi, "lol2");
	fi++;
	f.insert(fi, "lol1");
	f.insert(fi, "lol1");
	f2.insert(f2.begin(), f.begin(), fi);
	P(verif(compare_container(s, f)));
	P(verif(compare_container(s2, f2)));
	
	P("---------> unique <----");
	s.sort();
	f.sort();
	s.unique();
	f.unique();
	P(verif( compare_container(s, f) ));
	
	P("---------> reverse_iterator <----");
	ft::list<std::string>::reverse_iterator fi3 = f.rbegin();
	std::list<std::string>::reverse_iterator si3 = s.rbegin();
	bool good = true;
	for (; si3 != s.rend(); si3++)
	{
		if (*si3 != *fi3)
			good = false;
		fi3++;
	}
	verif(good);

	P("---------> clear <----");
	f.clear();
	s.clear();
	P("empty ? " << s.empty() << verif(s.empty() == f.empty()) );
	P("size = " << s.size() << verif(s.size() == f.size()) );

	P("---------> operator == <----");
	P("operator '==' : " << (s == s2) << verif((s == s2) == (f == f2)));

	P("---------> operator != <----");
	P("operator '!=' : " << (s != s2) << verif((s != s2) == (f != f2)));

	P("---------> operator < <----");
	P("operator '<' : " << (s < s2) << verif((s < s2) == (f < f2)));

	P("---------> operator <= <----");
	P("operator '<=' : " << (s <= s2) << verif((s <= s2) == (f <= f2)));

	P("---------> operator > <----");
	P("operator '>' : " << (s > s2) << verif((s > s2) == (f > f2)));

	P("---------> operator >= <----");
	P("operator '>=' : " << (s >= s2) << verif((s >= s2) == (f >= f2)));
}

void t_vector(void)
{
	ft::vector<std::string>	 f;
	std::vector<std::string>	s;
	
	P("~~~~~~~~~~~~~~~ VECTOR ~~~~~~~~~~~~~~~");
	P("---------> empty <----");
	P("empty ? " << s.empty() << verif(s.empty() == f.empty()) );
	P("size = " << s.size() << verif(s.size() == f.size()) );

	P("---------> INSERT <----");
	s.insert(s.begin(), "one");
	s.insert(s.begin(),"two");
	s.insert(s.begin(),"three");
	s.insert(s.begin(),"four");
	f.insert(f.begin(),"one");
	f.insert(f.begin(),"two");
	f.insert(f.begin(),"three");
	f.insert(f.begin(),"four");
	s.insert(s.begin() + 2, 5, "one");
	f.insert(f.begin() + 2, 5, "one");
	// show_container(f);
	// show_container(s);

	s.insert(s.begin(), s.begin() + 2, s.begin() + 5);
	f.insert(f.begin(), f.begin() + 2, f.begin() + 5 );
	
	// show_container(f);
	// show_container(s);

	P(verif( compare_container(s, f) ));
	P("size = " << s.size() << verif(s.size() == f.size()) );

	P("---------> Constructor <----");
	{
	ft::vector<std::string>	 f2(5, "lol");
	std::vector<std::string>	 s2(5, "lol");
	P(verif( compare_container(s2, f2) ));
	P("size = " << s2.size() << verif(s2.size() == f2.size()) );
	}
	{
	ft::vector<std::string>	 f2(f.begin(), f.end());
	std::vector<std::string>	 s2(s.begin(), s.end());
	P(verif( compare_container(f2, f) ));
	P("size = " << f2.size() << verif(f.size() == f2.size()) );
	}

	P("---------> push_back <----");
	s.push_back("un");
	s.push_back("deux");
	s.push_back("trois");
	s.push_back("quatre");
	s.push_back("un");
	s.push_back("deux");
	s.push_back("trois");
	s.push_back("quatre");

	f.push_back("un");
	f.push_back("deux");
	f.push_back("trois");
	f.push_back("quatre");
	f.push_back("un");
	f.push_back("deux");
	f.push_back("trois");
	f.push_back("quatre");
	// show_container(f);
	P(verif( compare_container(s, f) ));
	P("size = " << s.size() << verif(s.size() == f.size()) );

	P("---------> Front <----");
	P("front = " << s.front() << verif(s.front() == f.front()) );

	P("---------> Back <----");
	P("Back = " << s.back() << verif(s.back() == f.back()) );

	P("---------> Pop_Back <----");
	s.pop_back();
	f.pop_back();
	P(verif( compare_container(s, f) ));

	P("---------> erase <----");
	s.erase(s.begin() + 5);
	s.erase(s.begin() + 1, s.begin() + 3);
	f.erase(f.begin() + 5);
	f.erase(f.begin() + 1, f.begin() + 3);
	P(verif( compare_container(s, f) ));
	
	P("---------> resize (10) <----");
	s.resize(10);
	f.resize(10);
	P("size = " << s.size() << verif(s.size() == f.size()) );

	P("---------> resize (5) <----");
	s.resize(5);
	f.resize(5);
	P("size = " << s.size() << verif(s.size() == f.size()) );

	P("---------> Assign <----");
	{
		ft::vector<std::string>	 f2(f);
		ft::vector<std::string>	 f3;
		std::vector<std::string>	 s2(s);
		std::vector<std::string>	 s3;

		f3.assign(f2.begin(), f2.end());
		s3.assign(s2.begin(), s2.end());
		P(verif( compare_container(s3, f3) ));

		f3.assign(5, "lol");
		s3.assign(5, "lol");
		P(verif( compare_container(s3, f3) ));
	}
	P("---------> at <----");
	{
		bool v = true;

		for (size_t i = 0; i < s.size(); i++)
		{
			if (s.at(i) != f.at(i))
				v = false;
		}
		P(verif(v ));
	}

	P("---------> swap  <----");
	{
		ft::vector<std::string>	 f3;
		std::vector<std::string>	 s3;
		s.swap(s3);
		f.swap(f3);
		P(verif(compare_container(s, f)));
		P(verif(compare_container(s3, f3)));

		s.swap(s3);
		f.swap(f3);
	}
	P("---------> reverse_iterator <----");
	{
		ft::vector<std::string>::reverse_iterator fi3 = f.rbegin();
		std::vector<std::string>::reverse_iterator si3 = s.rbegin();
		bool good = true;
		for (; si3 != s.rend(); si3++)
		{
			if (*si3 != *fi3)
				good = false;
			fi3++;
		}
		verif(good);
	}
	P("---------> clear <----");
	ft::vector<std::string>		f2(f);
	std::vector<std::string>	s2(s);
	f.clear();
	s.clear();
	P("empty ? " << s.empty() << verif(s.empty() == f.empty()) );
	P("size = " << s.size() << verif(s.size() == f.size()) );

	P("---------> operator == <----");
	P("operator '==' : " << (s == s2) << verif((s == s2) == (f == f2)));

	P("---------> operator != <----");
	P("operator '!=' : " << (s != s2) << verif((s != s2) == (f != f2)));

	P("---------> operator < <----");
	P("operator '<' : " << (s < s2) << verif((s < s2) == (f < f2)));

	P("---------> operator <= <----");
	P("operator '<=' : " << (s <= s2) << verif((s <= s2) == (f <= f2)));

	P("---------> operator > <----");
	P("operator '>' : " << (s > s2) << verif((s > s2) == (f > f2)));

	P("---------> operator >= <----");
	P("operator '>=' : " << (s >= s2) << verif((s >= s2) == (f >= f2)));
}

int main(void)
{
	// t_stack();
	// t_queue();
	// t_list();
	t_vector();
	return (0);
}