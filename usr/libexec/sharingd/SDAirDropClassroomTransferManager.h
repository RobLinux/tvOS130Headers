/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:57 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/SDXPCDaemon.h>
#import <sharingd/SDAirDropClassroomTransferManagerProtocol.h>
#import <sharingd/SDAirDropAlertManagerDelegate.h>

@class NSMutableDictionary, SDAirDropTransferManager, NSString;

@interface SDAirDropClassroomTransferManager : SDXPCDaemon <SDAirDropClassroomTransferManagerProtocol, SDAirDropAlertManagerDelegate> {

	NSMutableDictionary* _transferIDToProgress;
	SDAirDropTransferManager* _transferManager;

}

@property (nonatomic,retain) SDAirDropTransferManager * transferManager;              //@synthesize transferManager=_transferManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)invalidate;
-(id)exportedInterface;
-(id)remoteObjectInterface;
-(void)activate;
-(id)machServiceName;
-(void)updateTransferWithIdentifier:(id)arg1 withState:(long long)arg2 information:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)connectionInvalidated:(id)arg1 ;
-(BOOL)shouldAcceptNewConnection:(id)arg1 ;
-(void)connectionEstablished:(id)arg1 ;
-(void)_enumerateRemoteObjectProxiesUsingBlock:(/*^block*/id)arg1 ;
-(void)setTransferManager:(SDAirDropTransferManager *)arg1 ;
-(void)alertManager:(id)arg1 acceptingTransferWithRecordID:(id)arg2 withDestinationURL:(id)arg3 shouldExtractMediaFromPhotosBundlesForRecordID:(BOOL)arg4 ;
-(void)alertManager:(id)arg1 cancelingTransferWithRecordID:(id)arg2 withFailureReason:(unsigned long long)arg3 ;
-(SDAirDropTransferManager *)transferManager;
-(void)replaceIconValue:(id)arg1 forKey:(id)arg2 ;
-(id)makeDestinationDirectoryWithIdentifier:(id)arg1 error:(id*)arg2 ;
@end

