/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFAnalyticsEvent.h>

@class NSUUID, NSDate, NSString;

@interface HFAnalyticsCameraDidFailToLoadPosterFrameEvent : HFAnalyticsEvent {

	NSUUID* _clipID;
	NSUUID* _cameraID;
	double _posterFrameTimeOffset;
	NSDate* _clipStartDate;
	NSString* _errorDomain;
	long long _errorCode;

}

@property (nonatomic,retain) NSUUID * clipID;                           //@synthesize clipID=_clipID - In the implementation block
@property (nonatomic,retain) NSUUID * cameraID;                         //@synthesize cameraID=_cameraID - In the implementation block
@property (assign,nonatomic) double posterFrameTimeOffset;              //@synthesize posterFrameTimeOffset=_posterFrameTimeOffset - In the implementation block
@property (nonatomic,retain) NSDate * clipStartDate;                    //@synthesize clipStartDate=_clipStartDate - In the implementation block
@property (nonatomic,retain) NSString * errorDomain;                    //@synthesize errorDomain=_errorDomain - In the implementation block
@property (assign,nonatomic) long long errorCode;                       //@synthesize errorCode=_errorCode - In the implementation block
-(id)initWithData:(id)arg1 ;
-(id)payload;
-(long long)errorCode;
-(NSString *)errorDomain;
-(void)setErrorDomain:(NSString *)arg1 ;
-(void)setErrorCode:(long long)arg1 ;
-(NSUUID *)clipID;
-(NSUUID *)cameraID;
-(double)posterFrameTimeOffset;
-(NSDate *)clipStartDate;
-(void)setClipID:(NSUUID *)arg1 ;
-(void)setCameraID:(NSUUID *)arg1 ;
-(void)setPosterFrameTimeOffset:(double)arg1 ;
-(void)setClipStartDate:(NSDate *)arg1 ;
@end

