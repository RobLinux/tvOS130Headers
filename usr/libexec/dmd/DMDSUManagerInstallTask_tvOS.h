/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:36 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/dmd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <dmd/DMDSUManagerInstallTask.h>
#import <demod/PBSOSUpdateManagerClientDelegate.h>

@class PBSOSUpdateManagerClient, PBSOSUpdateDownload, NSString;

@interface DMDSUManagerInstallTask_tvOS : DMDSUManagerInstallTask <PBSOSUpdateManagerClientDelegate> {

	PBSOSUpdateManagerClient* client;
	PBSOSUpdateDownload* lastDownload;

}

@property (nonatomic,retain) PBSOSUpdateManagerClient * client; 
@property (nonatomic,retain) PBSOSUpdateDownload * lastDownload; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_dmfStatusErrorFromSUStatusError:(id)arg1 ;
+(id)_dmfDownloadErrorFromSUDownloadError:(id)arg1 ;
+(id)_dmfInstallErrorFromSUInstallError:(id)arg1 ;
+(id)defaultProductKey;
-(id)init;
-(PBSOSUpdateManagerClient *)client;
-(void)setClient:(PBSOSUpdateManagerClient *)arg1 ;
-(void)client:(id)arg1 downloadDidFinish:(id)arg2 ;
-(PBSOSUpdateDownload *)lastDownload;
-(void)setLastDownload:(PBSOSUpdateDownload *)arg1 ;
-(id)availableUpdateWithVersion:(id)arg1 useDelay:(BOOL)arg2 error:(id*)arg3 ;
-(id)currentStatusWithError:(id*)arg1 ;
-(BOOL)startDownloadWithError:(id*)arg1 ;
-(BOOL)startInstallWithError:(id*)arg1 ;
-(BOOL)removeUpdateWithError:(id*)arg1 ;
@end

