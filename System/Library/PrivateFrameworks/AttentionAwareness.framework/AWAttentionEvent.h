/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AttentionAwareness/NSSecureCoding.h>

@interface AWAttentionEvent : NSObject <NSSecureCoding> {

	unsigned long long _tagIndex;
	unsigned long long _eventMask;
	double _timestamp;
	id _tag;

}

@property (nonatomic,readonly) unsigned long long eventMask;              //@synthesize eventMask=_eventMask - In the implementation block
@property (nonatomic,readonly) double timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) id tag;                                    //@synthesize tag=_tag - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timestamp;
-(id)tag;
-(unsigned long long)eventMask;
-(unsigned long long)tagIndex;
-(void)validateMask;
-(id)initWithTimestamp:(double)arg1 tagIndex:(unsigned long long)arg2 eventMask:(unsigned long long)arg3 ;
-(void)updateWithConfig:(id)arg1 ;
@end
