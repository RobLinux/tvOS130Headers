/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:43:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/Support/bookassetd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSError, BLBookInstallInfo;

@interface BLDownloadDRMOperation : NSOperation {

	BOOL _success;
	NSError* _error;
	BLBookInstallInfo* _installInfo;

}

@property (nonatomic,retain) BLBookInstallInfo * installInfo;              //@synthesize installInfo=_installInfo - In the implementation block
@property (nonatomic,readonly) BOOL success;                               //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) NSError * error;                            //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)main;
-(BOOL)success;
-(void)setInstallInfo:(BLBookInstallInfo *)arg1 ;
-(BLBookInstallInfo *)installInfo;
-(id)initWithInstallInfo:(id)arg1 ;
-(BOOL)_decryptAsset:(id*)arg1 ;
@end
