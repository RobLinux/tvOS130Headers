/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray, NSMutableDictionary, NSArray;

@interface OSAReport : NSObject {

	NSString* _incidentID;
	NSString* _logType;
	double _capture_time;
	NSMutableArray* _notes;
	NSMutableDictionary* _logWritingOptions;
	NSString* _logfile;

}

@property (nonatomic,readonly) NSArray * notes;                 //@synthesize notes=_notes - In the implementation block
@property (nonatomic,readonly) NSString * logfile;              //@synthesize logfile=_logfile - In the implementation block
+(id)bootArgs;
+(unsigned char)executeWithTimeout:(unsigned)arg1 Code:(/*^block*/id)arg2 ;
+(id)kernelVersionDescription;
+(id)systemIDWithDescription:(BOOL)arg1 ;
-(id)init;
-(id)incidentID;
-(id)problemType;
-(BOOL)isActionable;
-(id)appleCareDetails;
-(id)reportNamePrefix;
-(void)generateLogAtLevel:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
-(int)streamContentAtLevel:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)saveWithOptions:(id)arg1 ;
-(NSArray *)notes;
-(BOOL)isAppleTV;
-(id)getSyslogForPid:(int)arg1 andOptionalSenders:(id)arg2 ;
-(id)additionalIPSMetadata;
-(BOOL)secondChanceToSylog;
-(void)symlink:(id)arg1 ;
-(NSString *)logfile;
@end

