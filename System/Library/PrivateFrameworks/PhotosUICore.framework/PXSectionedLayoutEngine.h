/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXLayoutEngine.h>
#import <PhotosUICore/PXMutableSectionedLayoutEngine.h>

@class PXSectionedLayoutContent, NSString;

@interface PXSectionedLayoutEngine : PXLayoutEngine <PXMutableSectionedLayoutEngine> {

	PXSectionedLayoutContent* _layoutContent;
	SCD_Struct_PX37 _delegateRespondsTo;
	BOOL _needsUpdateSeedItem;
	PXLayoutGeometry* _geometryBuffer;
	unsigned long long _geometryBufferCount;
	long long _axis;
	CGSize _seedSize;

}

@property (nonatomic,readonly) long long axis;                                                 //@synthesize axis=_axis - In the implementation block
@property (nonatomic,readonly) id<PXSectionedLayoutItem> seedItem; 
@property (nonatomic,readonly) CGSize seedSize;                                                //@synthesize seedSize=_seedSize - In the implementation block
@property (assign,nonatomic,__weak) id<PXSectionedLayoutEngineDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<PXSectionedLayoutEngineDelegate>)arg1 ;
-(long long)axis;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)setDataSourceSnapshot:(id)arg1 withChangeDetails:(id)arg2 ;
-(void)setSeedItem:(id<PXSectionedLayoutItem>)arg1 ;
-(id)initWithLayoutGenerator:(id)arg1 dataSourceSnapshot:(id)arg2 ;
-(id)performChangesAndWait:(/*^block*/id)arg1 ;
-(BOOL)canComputeLayoutSnapshot;
-(void)updateLayoutDataWithChangeDetails:(id)arg1 ;
-(id)computeLayoutSnapshot;
-(CGSize)seedSize;
-(void)setSeedSize:(CGSize)arg1 ;
-(id)initWithAxis:(long long)arg1 layoutGenerator:(id)arg2 dataSourceSnapshot:(id)arg3 ;
-(id)initWithAxis:(long long)arg1 layoutGenerator:(id)arg2 dataSourceSnapshot:(id)arg3 insets:(UIEdgeInsets)arg4 ;
-(void)_resetLayoutData;
-(void)_updateLayoutDataWithChangeDetails:(id)arg1 ;
-(id)_newLayoutSection;
-(id)_newLayoutSnapshot;
-(BOOL)_computeSectionsIfNeeded;
-(id)_computeSectionsFromSection:(id)arg1 itemIndex:(long long)arg2 kind:(long long)arg3 ;
-(void)_computeSection:(id)arg1 ;
-(void)_prepareGeometryBufferForCount:(unsigned long long)arg1 ;
-(id)_emptyLayoutSnapshot;
@end

