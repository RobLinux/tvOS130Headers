/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXChangeObserver.h>
#import <PhotosUICore/PXUIViewBasicTile.h>
#import <PhotosUICore/PXReusableObject.h>

@class PXCMMViewModel, PXMomentShareStatusPresentation, PXCMMPosterHeaderView, NSString, UIView;

@interface PXCMMPosterTileController : NSObject <PXChangeObserver, PXUIViewBasicTile, PXReusableObject> {

	unsigned long long _activityType;
	PXCMMViewModel* _viewModel;
	PXMomentShareStatusPresentation* _momentShareStatusPresentation;
	PXCMMPosterHeaderView* _posterHeaderView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * view; 
+(double)preferredHeightForWidth:(double)arg1 traitCollection:(id)arg2 screen:(id)arg3 ;
-(id)init;
-(void)prepareForReuse;
-(UIView *)view;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(void)becomeReusable;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)initWithActivityType:(unsigned long long)arg1 viewModel:(id)arg2 momentShareStatusPresentation:(id)arg3 ;
-(void)_updateContent;
-(void)_updateStatusString;
@end

