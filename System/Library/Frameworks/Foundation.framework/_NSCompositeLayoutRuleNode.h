/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/_NSLayoutRuleNode.h>
#import <Foundation/_NSLayoutRuleNodeParent.h>

@class NSArray, NSMutableArray, NSString;

@interface _NSCompositeLayoutRuleNode : _NSLayoutRuleNode <_NSLayoutRuleNodeParent> {

	NSMutableArray* _childNodes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSArray * _childRuleNodes; 
-(NSString *)debugDescription;
-(void)dealloc;
-(id)childNodesCreatingIfNecessary;
-(void)_addChildRuleNode:(id)arg1 ;
-(void)_removeChildRuleNode:(id)arg1 ;
-(NSArray *)_childRuleNodes;
@end

