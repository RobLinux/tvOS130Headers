/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <GameplayKit/GKGraphNode.h>

@interface GKGridGraphNode : GKGraphNode {

	GKCGridGraphNode* _cGridGraphNode;

}

@property (nonatomic,readonly)  gridPosition; 
+(BOOL)supportsSecureCoding;
+(id)nodeWithGridPosition:;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)costToNode:(id)arg1 ;
-(float)estimatedCostToNode:(id)arg1 ;
-(GKCGridGraphNode*)cGridGraphNode;
-(void)deleteCGraphNode;
-(GKCGraphNode*)makeCGraphNode;
-(id)initWithGridPosition:;
-()gridPosition;
@end

