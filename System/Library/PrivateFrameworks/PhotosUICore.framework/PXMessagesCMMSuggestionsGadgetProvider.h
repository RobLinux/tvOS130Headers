/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXGadgetProvider.h>
#import <PhotosUICore/PXSectionedDataSourceManagerObserver.h>
#import <PhotosUICore/PXMessagesCMMSuggestionGadgetActionDelegate.h>

@class PXCMMSuggestionsDataSourceManager, PXCMMSuggestionsDataSource, PXMessagesExtensionViewModel, NSArray, NSString;

@interface PXMessagesCMMSuggestionsGadgetProvider : PXGadgetProvider <PXSectionedDataSourceManagerObserver, PXMessagesCMMSuggestionGadgetActionDelegate> {

	PXCMMSuggestionsDataSourceManager* _suggestionsDataSourceManager;
	PXCMMSuggestionsDataSource* _dataSource;
	BOOL _didGenerateGadgets;
	PXMessagesExtensionViewModel* _viewModel;
	NSArray* _suggestionGadgets;

}

@property (nonatomic,retain) PXCMMSuggestionsDataSourceManager * suggestionsDataSourceManager;              //@synthesize suggestionsDataSourceManager=_suggestionsDataSourceManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
-(id)init;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(unsigned long long)estimatedNumberOfGadgets;
-(void)generateGadgets;
-(void)setSuggestionsDataSourceManager:(PXCMMSuggestionsDataSourceManager *)arg1 ;
-(PXCMMSuggestionsDataSourceManager *)suggestionsDataSourceManager;
-(void)_setDataSource:(id)arg1 changes:(id)arg2 ;
-(id)initWithViewModel:(id)arg1 suggestionsDataSourceManager:(id)arg2 ;
-(void)didSelectSuggestionGadget:(id)arg1 ;
-(id)_createSuggestionGadgetWithSuggestion:(id)arg1 ;
@end
