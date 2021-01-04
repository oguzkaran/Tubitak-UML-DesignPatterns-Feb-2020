#ifndef OPERATION_H_
#define OPERATION_H_

#ifdef __cplusplus
extern "C" {
#endif
#ifdef DLLEXPORT
#define DLLSPEC __declspec(dllexport)
#else
#define DLLSPEC __declspec(dllimport)
#endif
	DLLSPEC int add(int a, int b);
	DLLSPEC int multiply(int a, int b);
#ifdef __cplusplus
}
#endif

#endif /* OPERATION_H_ */