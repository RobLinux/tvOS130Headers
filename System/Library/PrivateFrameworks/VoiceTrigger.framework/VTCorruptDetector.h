/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VoiceTrigger/VoiceTrigger-Structs.h>
@interface VTCorruptDetector : NSObject {

	int _zeroSamplesCount;
	int _maxZeroSamplesCount;

}
-(id)init;
-(void)reset;
-(void)analyze:(AudioBuffer*)arg1 ;
-(int)getMaxZeroSampleCount;
-(BOOL)audioHasZeroRun;
@end

