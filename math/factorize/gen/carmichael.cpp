#include <iostream>

#include "../params.h"
#include "random.h"

using namespace std;

/*
	https://oeis.org/A033502/b033502.txt
	Carmichael numbers of the form (6*k+1)*(12*k+1)*(18*k+1)
*/
vector<long long> numbers = {
	999211956328352449,
	997251780414294289,
	991874518536877849,
	990411354834609529,
	985998096194414041,
	983278820436601609,
	980338585374651241,
	975504847636473841,
	965277979213752649,
	965246032975227121,
	961608780196508809,
	958266773114493529,
	958234981757032801,
	954108089724710521,
	952049094555028681,
	951447794423812489,
	947813749259110849,
	936466145755765561,
	933526304940574369,
	929470715320815289,
	928380836329493329,
	924929999154048241,
	922014364388310649,
	916571792029099321,
	914875391193503041,
	904740924074033161,
	901562612252716009,
	890285244669331561,
	888168041709989041,
	876583401442998481,
	876433618043357401,
	875385611968872241,
	864951463954961641,
	859351658269796929,
	856664097453943561,
	855337156975081441,
	852863868951625009,
	849192214451743009,
	841588959000544849,
	838967675420688409,
	834581980797556681,
	828508117701885121,
	828392712001948369,
	827787007896930721,
	826806970217716489,
	826058051791979761,
	809184706417561321,
	802246051582365601,
	795936952300861729,
	773784842267915281,
	768997939703294809,
	764476910887018969,
	763930114553635849,
	757225832207169601,
	754647316001038081,
	754403339511769249,
	749669798470628449,
	748725472646447689,
	746139393134794441,
	744552990094074409,
	730535604011380009,
	728521116957519481,
	725902541184005209,
	724819920566381641,
	723791110156754329,
	720211080917958841,
	718373029429581121,
	710036358376535929,
	703677559758862609,
	701583644333934001,
	700705956080852569,
	696559782950246881,
	696071564755655689,
	692071659475885081,
	688010631249679849,
	684930830851020601,
	671047542038530801,
	659952996888982681,
	654661470090214369,
	653552377317412849,
	650723721692455009,
	649005933908975689,
	646190421402210049,
	642262401006591961,
	635855929876480249,
	630405566286315121,
	618339400333838641,
	614548829486677681,
	609268102067823409,
	608187424599317161,
	603036634994733241,
	601893387786495169,
	593284224184522921,
	592937882430113881,
	591576912624775249,
	591346446379212889,
	589389899531902129,
	588815267017231729,
	582838391995869241,
	581720825648676169
};

int main(int, char**) {
    int q = MAX_Q;
    printf("%d\n", q);
    for (int i = 0; i < q; i++) {
		long long x = numbers[i % size(numbers)];
        printf("%lld\n", x);
    }
    return 0;
}