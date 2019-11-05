/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@interface _UISearchControllerView : UIView {

	BOOL __disableSearchBarContainerViewOrdering;

}

@property (assign,nonatomic) BOOL _disableSearchBarContainerViewOrdering;              //@synthesize _disableSearchBarContainerViewOrdering=__disableSearchBarContainerViewOrdering - In the implementation block
-(void)bringSubviewToFront:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)sendSubviewToBack:(id)arg1 ;
-(void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3 ;
-(void)set_disableSearchBarContainerViewOrdering:(BOOL)arg1 ;
-(BOOL)_disableSearchBarContainerViewOrdering;
-(void)_ensureContainerIsOnTop;
@end

