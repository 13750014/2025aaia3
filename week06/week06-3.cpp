///week06-3.cpp
///LeetCode �ǲ߭p�e Simulation ���� ��1�D 682. Baseball Game
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector <int> a; ///�}�Ca
        for (string op: operations){ ///C++�i���j��
            ///cout << op << "\n"; ///�ոլݡA�|�L�X����F��
            if(op[0]=='+'){ ///�⥽��Ƭۥ[�A�b��^�h
                int temp = a.back(); ///���O�U�̫�1��
                a.pop_back(); ///�ȮɦR���L
                int temp2 = a.back(); ///�A�O�U�̫��2��
                a.push_back(temp);///����̫�1����^�h
                a.push_back(temp+temp2); ///��Ƭۥ[�A�b��^�h
            }
            else if(op[0]=='D'){ ///�ƻs�̫�1��u�ADouble��2���A�b��^�h�v
                a.push_back(a.back()*2);
            }
            else if(op[0]=='C'){ ///�R���̫�1��
                a.pop_back();
            }
            else{ ///�� stoi(op) ��ơA��^�h
                a.push_back(stoi(op));
            }
        }
        ///�̫�A��for �j��A��}�Ca���ȡA�����[�_��
        int ans=0;
        for(int now:a){ ///C++�i���j��A�]�i�H��(int i=0; i<a.size(); i++){int now=a[i]
            ans+=now;
        }
        return ans; ///���H�Kreturn ���@�U�A��
    }
};
