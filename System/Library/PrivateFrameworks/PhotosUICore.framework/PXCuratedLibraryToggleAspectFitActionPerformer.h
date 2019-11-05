/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXCuratedLibraryActionPerformer.h>

@class PXGLayout;

@interface PXCuratedLibraryToggleAspectFitActionPerformer : PXCuratedLibraryActionPerformer {

	PXGLayout* _layout;

}

@property (nonatomic,__weak,readonly) PXGLayout * layout;              //@synthesize layout=_layout - In the implementation block
-(PXGLayout *)layout;
-(id)initWithViewModel:(id)arg1 layout:(id)arg2 ;
-(void)performActionWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithActionType:(id)arg1 viewModel:(id)arg2 ;
@end

