/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:55 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/SDAirDropHandler.h>

@class NSOperationQueue, SDAirDropHandleriCloudDrive, SDAirDropHandler, LSBundleProxy, NSArray;

@interface SDAirDropHandlerGenericFiles : SDAirDropHandler {

	NSOperationQueue* _workOperationsQueue;
	SDAirDropHandleriCloudDrive* _icloudDriveHandler;
	SDAirDropHandler* _selectedHandler;
	LSBundleProxy* _selectedProxy;
	NSArray* _availableApplications;
	LSBundleProxy* _selectedApplication;

}

@property (nonatomic,copy) NSArray * availableApplications;                    //@synthesize availableApplications=_availableApplications - In the implementation block
@property (nonatomic,retain) LSBundleProxy * selectedApplication;              //@synthesize selectedApplication=_selectedApplication - In the implementation block
-(long long)transferTypes;
-(LSBundleProxy *)selectedApplication;
-(void)setSelectedApplication:(LSBundleProxy *)arg1 ;
-(id)initWithTransfer:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)initWithTransfer:(id)arg1 ;
-(BOOL)canHandleTransfer;
-(id)suitableContentsDescription;
-(void)updatePossibleActions;
-(void)setAvailableApplications:(NSArray *)arg1 ;
-(id)cancelActionTitleToAccompanyActions:(id)arg1 ;
-(NSArray *)availableApplications;
@end

