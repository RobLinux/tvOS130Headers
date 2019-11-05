/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMICameraVideoFrame;

@interface HMICameraVideoFrameSelectorFrameScore : HMFObject {

	float _score;
	HMICameraVideoFrame* _frame;

}

@property (readonly) HMICameraVideoFrame * frame;              //@synthesize frame=_frame - In the implementation block
@property (readonly) float score;                              //@synthesize score=_score - In the implementation block
-(id)description;
-(float)score;
-(HMICameraVideoFrame *)frame;
-(id)initWithFrame:(id)arg1 score:(float)arg2 ;
@end

