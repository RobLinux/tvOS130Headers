/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGLayout.h>
#import <PhotosUICore/PXGDataSourceDrivenLayout.h>

@protocol PXGSublayoutFaultingDelegate;
@class PXGSublayoutComposition, NSString;

@interface PXGCompositeLayout : PXGLayout <PXGDataSourceDrivenLayout> {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	BOOL _isUpdatingSublayouts;
	PXGSublayoutComposition* _composition;
	id<PXGSublayoutFaultingDelegate> _sublayoutFaultingDelegate;
	UIEdgeInsets _faultInOutsets;
	UIEdgeInsets _faultOutOutsets;

}

@property (assign,nonatomic) UIEdgeInsets faultInOutsets;                                                    //@synthesize faultInOutsets=_faultInOutsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets faultOutOutsets;                                                   //@synthesize faultOutOutsets=_faultOutOutsets - In the implementation block
@property (nonatomic,retain) PXGSublayoutComposition * composition;                                          //@synthesize composition=_composition - In the implementation block
@property (assign,nonatomic,__weak) id<PXGSublayoutFaultingDelegate> sublayoutFaultingDelegate;              //@synthesize sublayoutFaultingDelegate=_sublayoutFaultingDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)update;
-(PXGSublayoutComposition *)composition;
-(void)visibleRectDidChange;
-(void)referenceSizeDidChange;
-(void)screenScaleDidChange;
-(void)viewEnvironmentDidChange;
-(void)sublayoutNeedsUpdate:(id)arg1 ;
-(void)sublayoutDidChangeContentSize:(id)arg1 ;
-(void)didAddSublayout:(id)arg1 ;
-(void)willRemoveSublayout:(id)arg1 ;
-(void)insertSublayoutProvider:(id)arg1 inRange:(NSRange)arg2 ;
-(void)_updateSublayouts;
-(void)setFaultInOutsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)faultInOutsets;
-(UIEdgeInsets)faultOutOutsets;
-(void)setFaultOutOutsets:(UIEdgeInsets)arg1 ;
-(id)initWithComposition:(id)arg1 ;
-(void)setComposition:(PXGSublayoutComposition *)arg1 ;
-(void)_invalidateSublayouts;
-(id<PXGSublayoutFaultingDelegate>)sublayoutFaultingDelegate;
-(void)setSublayoutFaultingDelegate:(id<PXGSublayoutFaultingDelegate>)arg1 ;
@end

