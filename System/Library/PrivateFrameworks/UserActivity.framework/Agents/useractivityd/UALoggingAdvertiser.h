/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <useractivityd/UAAdvertiser.h>

@class NSFileHandle, NSString;

@interface UALoggingAdvertiser : UAAdvertiser {

	NSFileHandle* _outputFile;
	NSString* _logFileDirectoryPath;
	NSString* _logFilePath;

}

@property (retain) NSFileHandle * outputFile;                    //@synthesize outputFile=_outputFile - In the implementation block
@property (retain) NSString * logFileDirectoryPath;              //@synthesize logFileDirectoryPath=_logFileDirectoryPath - In the implementation block
@property (retain) NSString * logFilePath;                       //@synthesize logFilePath=_logFilePath - In the implementation block
-(BOOL)resume;
-(BOOL)suspend;
-(id)initWithManager:(id)arg1 ;
-(id)statusString;
-(BOOL)active;
-(NSString *)logFilePath;
-(void)setLogFilePath:(NSString *)arg1 ;
-(void)log:(int)arg1 format:(id)arg2 ;
-(void)setOutputFile:(NSFileHandle *)arg1 ;
-(NSFileHandle *)outputFile;
-(id)advertisableItems;
-(void)setAdvertisableItems:(id)arg1 ;
-(void)setLogFileDirectoryPath:(NSString *)arg1 ;
-(NSString *)logFileDirectoryPath;
-(BOOL)shouldLog:(int)arg1 ;
-(void)log:(int)arg1 format:(id)arg2 args:(char*)arg3 ;
-(void)logItem:(id)arg1 ;
@end

