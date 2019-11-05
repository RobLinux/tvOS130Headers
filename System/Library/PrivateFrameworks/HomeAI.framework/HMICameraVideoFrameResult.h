/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeAI/NSSecureCoding.h>

@class NSDictionary, NSArray;

@interface HMICameraVideoFrameResult : NSObject <NSSecureCoding> {

	unsigned long long _frameId;
	NSDictionary* _annotationScores;
	long long _events;
	NSArray* _detections;
	unsigned long long _frameWidth;
	unsigned long long _frameHeight;

}

@property (readonly) unsigned long long frameId;                   //@synthesize frameId=_frameId - In the implementation block
@property (readonly) NSDictionary * annotationScores;              //@synthesize annotationScores=_annotationScores - In the implementation block
@property (readonly) long long events;                             //@synthesize events=_events - In the implementation block
@property (readonly) NSArray * detections;                         //@synthesize detections=_detections - In the implementation block
@property (readonly) unsigned long long frameWidth;                //@synthesize frameWidth=_frameWidth - In the implementation block
@property (readonly) unsigned long long frameHeight;               //@synthesize frameHeight=_frameHeight - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)events;
-(unsigned long long)frameId;
-(NSDictionary *)annotationScores;
-(id)initWithFrameId:(unsigned long long)arg1 events:(long long)arg2 annotationScores:(id)arg3 detections:(id)arg4 frameWidth:(unsigned long long)arg5 frameHeight:(unsigned long long)arg6 ;
-(NSArray *)detections;
-(unsigned long long)frameWidth;
-(unsigned long long)frameHeight;
@end
