/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXAssetsDataSourceManager.h>
#import <PhotosUICore/PXSectionedDataSourceManagerObserver.h>
#import <PhotosUICore/PXPhotoLibraryUIChangeObserver.h>

@protocol PXDisplaySuggestion;
@class PXSuggestionsDataSourceManager, PXSuggestionsDataSource, PXForYouSuggestionsAssetsDataSource, NSString;

@interface PXForYouSuggestionAssetsDataSourceManager : PXAssetsDataSourceManager <PXSectionedDataSourceManagerObserver, PXPhotoLibraryUIChangeObserver> {

	id<PXDisplaySuggestion> _displayOriginalSuggestion;
	PXSuggestionsDataSourceManager* _suggestionsDataSourceManager;
	PXSuggestionsDataSource* _suggestionsDataSource;

}

@property (nonatomic,readonly) PXSuggestionsDataSourceManager * suggestionsDataSourceManager;              //@synthesize suggestionsDataSourceManager=_suggestionsDataSourceManager - In the implementation block
@property (nonatomic,retain) PXSuggestionsDataSource * suggestionsDataSource;                              //@synthesize suggestionsDataSource=_suggestionsDataSource - In the implementation block
@property (nonatomic,retain) id<PXDisplaySuggestion> displayOriginalSuggestion;                            //@synthesize displayOriginalSuggestion=_displayOriginalSuggestion - In the implementation block
@property (nonatomic,readonly) PXForYouSuggestionsAssetsDataSource * dataSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)createInitialDataSource;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 ;
-(PXSuggestionsDataSourceManager *)suggestionsDataSourceManager;
-(id)initWithSuggestionsDataSourceManager:(id)arg1 ;
-(void)setDisplayOriginalSuggestion:(id<PXDisplaySuggestion>)arg1 ;
-(id<PXDisplaySuggestion>)displayOriginalSuggestion;
-(PXSuggestionsDataSource *)suggestionsDataSource;
-(void)setSuggestionsDataSource:(PXSuggestionsDataSource *)arg1 ;
@end

