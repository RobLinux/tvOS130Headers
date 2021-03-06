/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UICollectionLayoutVisualFormatItem.h>

@class NSArray;

@interface _UICollectionLayoutVisualTreeNode : _UICollectionLayoutVisualFormatItem {

	int _axis;
	NSArray* _children;

}

@property (nonatomic,retain) NSArray * children;              //@synthesize children=_children - In the implementation block
@property (assign,nonatomic) int axis;                        //@synthesize axis=_axis - In the implementation block
-(id)description;
-(NSArray *)children;
-(void)setChildren:(NSArray *)arg1 ;
-(int)axis;
-(void)setAxis:(int)arg1 ;
-(BOOL)isVerticalGroup;
-(BOOL)isHorizontalGroup;
-(id)initWithParent:(id)arg1 children:(id)arg2 axis:(int)arg3 ;
@end

