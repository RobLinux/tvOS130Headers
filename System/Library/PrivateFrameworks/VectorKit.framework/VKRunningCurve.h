/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKRunningCurve : NSObject {

	SCD_Struct_VK182 _p0;
	double _t0;
	SCD_Struct_VK182 _p1;
	double _t1;
	SCD_Struct_VK182 _pu;
	double _tu;
	SCD_Struct_VK183 _mb;
	BOOL _mbValid;

}
-(id)init;
-(void)dealloc;
-(void)reset;
-(SCD_Struct_VK184)stateAtTime:(double)arg1 ;
-(BOOL)hasStateAtTime:(double)arg1 ;
-(void)appendPosition:(Matrix<double, 3, 1>)arg1 atTime:(double)arg2 ;
@end

