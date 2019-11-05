/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class NSDictionary, CALayer;

@interface UITextMagnifierCommonRenderer : UIView {

	BOOL m_loaded;
	NSDictionary* m_images;
	NSDictionary* m_offsets;
	CALayer* m_back;
	CALayer* m_mask;
	CALayer* m_content;
	CALayer* m_front;
	BOOL _isRegisteredForGeometryChanges;

}
-(void)update;
-(void)didMoveToSuperview;
-(void)_geometryChanges:(id)arg1 forAncestor:(id)arg2 ;
-(void)loadImages;
-(id)visualsForMagnifier;
-(id)magnifier;
-(id)backgroundColourIfNecessary;
-(void)performOperations:(/*^block*/id)arg1 ;
@end

