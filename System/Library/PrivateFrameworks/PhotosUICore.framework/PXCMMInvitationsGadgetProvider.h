/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXGadgetProvider.h>
#import <PhotosUICore/PXChangeObserver.h>
#import <PhotosUICore/PXSectionedDataSourceManagerObserver.h>
#import <PhotosUICore/PXCMMInvitationGadgetDelegate.h>

@protocol PXCMMWorkflowPresenting;
@class PXCMMInvitationsDataSource, PXCMMInvitationsDataSourceManager, NSString;

@interface PXCMMInvitationsGadgetProvider : PXGadgetProvider <PXChangeObserver, PXSectionedDataSourceManagerObserver, PXCMMInvitationGadgetDelegate> {

	PXCMMInvitationsDataSource* _dataSource;
	BOOL _didGenerateGadgets;
	PXCMMInvitationsDataSourceManager* _dataSourceManager;
	id<PXCMMWorkflowPresenting> _workflowPresenter;

}

@property (nonatomic,readonly) PXCMMInvitationsDataSourceManager * dataSourceManager;              //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (nonatomic,readonly) id<PXCMMWorkflowPresenting> workflowPresenter;                      //@synthesize workflowPresenter=_workflowPresenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(unsigned long long)estimatedNumberOfGadgets;
-(void)generateGadgets;
-(PXCMMInvitationsDataSourceManager *)dataSourceManager;
-(id)initWithDataSourceManager:(id)arg1 workflowPresenter:(id)arg2 ;
-(void)_setDataSource:(id)arg1 changes:(id)arg2 ;
-(id<PXCMMWorkflowPresenting>)workflowPresenter;
-(id)invitationForGadget:(id)arg1 ;
-(id)_newGadgetForObjectID:(id)arg1 ;
@end

