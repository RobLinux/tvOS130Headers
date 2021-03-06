/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOPDMessageLink, NSTimeZone, NSString;

@interface GEOMessageLink : NSObject {

	GEOPDMessageLink* _messageLink;
	NSTimeZone* _timeZone;

}

@property (nonatomic,readonly) NSTimeZone * timeZone;                            //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,readonly) NSString * messageID; 
@property (nonatomic,readonly) NSString * messageURLString; 
@property (nonatomic,readonly) BOOL isVerified; 
@property (nonatomic,readonly) NSString * navBackgroundColorString; 
@property (nonatomic,readonly) NSString * navTintColorString; 
-(NSTimeZone *)timeZone;
-(int)responseTime;
-(BOOL)isVerified;
-(id)initWithMessageLink:(id)arg1 ;
-(NSString *)messageID;
-(NSString *)messageURLString;
-(NSString *)navBackgroundColorString;
-(NSString *)navTintColorString;
-(id)messageBusinessHours;
@end

