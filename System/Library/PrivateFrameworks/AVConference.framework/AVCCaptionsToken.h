/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AVCCaptionsToken : NSObject {

	NSString* _text;
	double _confidence;
	BOOL _hasSpaceAfter;

}

@property (nonatomic,readonly) NSString * text;                 //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) double confidence;               //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) BOOL hasSpaceAfter;              //@synthesize hasSpaceAfter=_hasSpaceAfter - In the implementation block
-(id)description;
-(void)dealloc;
-(double)confidence;
-(NSString *)text;
-(id)initWithText:(id)arg1 confidence:(double)arg2 spaceAfter:(BOOL)arg3 ;
-(BOOL)hasSpaceAfter;
@end
