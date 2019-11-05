/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSFileManager;

@interface MNKeepAliveManager : NSObject {

	unsigned long long _counter;
	NSString* _launchdKeepAliveFile;
	NSFileManager* _fileManager;

}

@property (assign) unsigned long long counter;                             //@synthesize counter=_counter - In the implementation block
@property (nonatomic,retain) NSString * launchdKeepAliveFile;              //@synthesize launchdKeepAliveFile=_launchdKeepAliveFile - In the implementation block
@property (nonatomic,retain) NSFileManager * fileManager;                  //@synthesize fileManager=_fileManager - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)checkIn;
-(unsigned long long)counter;
-(void)setCounter:(unsigned long long)arg1 ;
-(NSFileManager *)fileManager;
-(void)setFileManager:(NSFileManager *)arg1 ;
-(void)checkOut;
-(NSString *)launchdKeepAliveFile;
-(void)setLaunchdKeepAliveFile:(NSString *)arg1 ;
@end

