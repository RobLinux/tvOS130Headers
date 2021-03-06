/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXGadgetProvider.h>
#import <PhotosUICore/PXChangeObserver.h>
#import <PhotosUICore/PXSectionedDataSourceManagerObserver.h>

@protocol PXCMMWorkflowPresenting;
@class PXCMMSuggestionsDataSource, PXCMMSuggestionsDataSourceManager, NSString;

@interface PXCMMSuggestionsGadgetProvider : PXGadgetProvider <PXChangeObserver, PXSectionedDataSourceManagerObserver> {

	PXCMMSuggestionsDataSource* _dataSource;
	BOOL _didGenerateGadgets;
	PXCMMSuggestionsDataSourceManager* _dataSourceManager;
	id<PXCMMWorkflowPresenting> _workflowPresenter;

}

@property (nonatomic,readonly) PXCMMSuggestionsDataSourceManager * dataSourceManager;              //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (nonatomic,readonly) id<PXCMMWorkflowPresenting> workflowPresenter;                      //@synthesize workflowPresenter=_workflowPresenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(unsigned long long)estimatedNumberOfGadgets;
-(void)generateGadgets;
-(PXCMMSuggestionsDataSourceManager *)dataSourceManager;
-(id)initWithDataSourceManager:(id)arg1 workflowPresenter:(id)arg2 ;
-(id)_newGadgetForSuggestion:(id)arg1 ;
-(void)_setDataSource:(id)arg1 changes:(id)arg2 ;
-(id<PXCMMWorkflowPresenting>)workflowPresenter;
@end

