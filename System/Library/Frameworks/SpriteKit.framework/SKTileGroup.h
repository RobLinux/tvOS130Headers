/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/NSCopying.h>
#import <SpriteKit/NSSecureCoding.h>

@class NSMutableArray, NSString, SKTileSet, NSArray;

@interface SKTileGroup : NSObject <NSCopying, NSSecureCoding> {

	NSMutableArray* _rules;
	unsigned long long _type;
	NSString* _name;
	SKTileSet* _parentSet;

}

@property (assign,nonatomic,__weak) SKTileSet * parentSet;              //@synthesize parentSet=_parentSet - In the implementation block
@property (assign,nonatomic) unsigned long long type; 
@property (nonatomic,copy) NSArray * rules; 
@property (nonatomic,copy) NSString * name;                             //@synthesize name=_name - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)tileGroupWithRules:(id)arg1 ;
+(id)tileGroupWithTileDefinition:(id)arg1 ;
+(id)emptyTileGroup;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSArray *)rules;
-(void)setRules:(NSArray *)arg1 ;
-(BOOL)isEqualToNode:(id)arg1 ;
-(void)setRuleParentPointers;
-(id)initWithTileDefinition:(id)arg1 ;
-(id)initWithRules:(id)arg1 ;
-(unsigned long long)findTileDefinitionIndexForAdjacencyData:(unsigned long long)arg1 tileSetType:(unsigned long long)arg2 ;
-(id)findTileDefinitionIDsForAdjacencyData:(unsigned long long)arg1 tileSetType:(unsigned long long)arg2 ;
-(SKTileSet *)parentSet;
-(void)setParentSet:(SKTileSet *)arg1 ;
@end

