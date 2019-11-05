/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PXTilingLayoutObserver;
#import <PhotosUICore/PhotosUICore-Structs.h>
@class PXTilingScrollInfo, PXTilingCoordinateSpace;

@interface PXTilingLayout : NSObject {

	PXTilingScrollInfo* _scrollInfo;
	void* _coordinateSpaceIdentifier;
	id<PXTilingLayoutObserver> _observer;
	PXTilingCoordinateSpace* _coordinateSpace;
	CGSize _referenceSize;
	CGSize _visibleSize;
	CGPoint _visibleOrigin;
	UIEdgeInsets _contentInset;

}

@property (assign,nonatomic,__weak) id<PXTilingLayoutObserver> observer;               //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) PXTilingCoordinateSpace * coordinateSpace;              //@synthesize coordinateSpace=_coordinateSpace - In the implementation block
@property (nonatomic,readonly) BOOL shouldFlipHorizontally; 
@property (assign,nonatomic) CGSize referenceSize;                                     //@synthesize referenceSize=_referenceSize - In the implementation block
@property (assign,nonatomic) CGSize visibleSize;                                       //@synthesize visibleSize=_visibleSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                                //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic) CGPoint visibleOrigin;                                    //@synthesize visibleOrigin=_visibleOrigin - In the implementation block
@property (nonatomic,readonly) CGRect visibleRect; 
@property (nonatomic,readonly) CGRect contentBounds; 
@property (nonatomic,readonly) CGRect scrollBounds; 
@property (nonatomic,copy,readonly) PXTilingScrollInfo * scrollInfo;                   //@synthesize scrollInfo=_scrollInfo - In the implementation block
@property (nonatomic,readonly) void* coordinateSpaceIdentifier;                        //@synthesize coordinateSpaceIdentifier=_coordinateSpaceIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL allowHorizontalFlip; 
-(id)init;
-(id<PXTilingLayoutObserver>)observer;
-(void)setObserver:(id<PXTilingLayoutObserver>)arg1 ;
-(CGRect)visibleRect;
-(CGRect)contentBounds;
-(void)invalidateLayout;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(PXTilingCoordinateSpace *)coordinateSpace;
-(void)prepareLayout;
-(void)setVisibleOrigin:(CGPoint)arg1 ;
-(CGSize)referenceSize;
-(void)setReferenceSize:(CGSize)arg1 ;
-(void)enumerateTilesInRect:(CGRect)arg1 withOptions:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)getGeometry:(PXTileGeometry*)arg1 group:(unsigned long long*)arg2 userData:(id*)arg3 forTileWithIdentifier:(PXTileIdentifier)arg4 ;
-(CGRect)scrollBounds;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(BOOL)allowHorizontalFlip;
-(BOOL)shouldFlipHorizontally;
-(CGSize)visibleSize;
-(void)setVisibleSize:(CGSize)arg1 ;
-(CGPoint)visibleOrigin;
-(PXTilingScrollInfo *)scrollInfo;
-(void*)coordinateSpaceIdentifier;
@end

