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

@class NSMutableArray, NSArray, SKTileGroup, NSString;

@interface SKTileSet : NSObject <NSCopying, NSSecureCoding> {

	NSMutableArray* _definitions;
	NSMutableArray* _groups;
	NSArray* _stamps;
	unsigned long long _type;
	CGSize _defaultTileSize;
	SKTileGroup* _defaultTileGroup;
	NSString* _name;

}

@property (nonatomic,readonly) NSArray * tileDefinitions; 
@property (nonatomic,retain) NSArray * stamps; 
@property (nonatomic,copy) NSArray * tileGroups; 
@property (nonatomic,copy) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long type; 
@property (nonatomic,retain) SKTileGroup * defaultTileGroup; 
@property (assign,nonatomic) CGSize defaultTileSize; 
+(BOOL)supportsSecureCoding;
+(id)recursivePathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 ;
+(id)findTileSetInBundleNamed:(id)arg1 ;
+(id)tileSetWithTileGroups:(id)arg1 ;
+(id)tileSetWithTileGroups:(id)arg1 tileSetType:(unsigned long long)arg2 ;
+(id)tileSetNamed:(id)arg1 ;
+(id)tileSetFromURL:(id)arg1 ;
+(void)clearTileSetTableCache;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(id)init;
-(void)dealloc;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSArray *)tileGroups;
-(void)setTileGroups:(NSArray *)arg1 ;
-(void)commonInit;
-(CGSize)defaultTileSize;
-(BOOL)isEqualToNode:(id)arg1 ;
-(NSArray *)tileDefinitions;
-(void)unobserveAllTileDefinitions;
-(void)lookForMissingDefinitionsInGroups;
-(void)updateTileDefinitionIDsInGroupRules;
-(void)setGroupParentPointers;
-(SKTileGroup *)defaultTileGroup;
-(void)observeTileDefinition:(id)arg1 ;
-(void)removeTileDefinitionObservers:(id)arg1 ;
-(void)calcDefaultTileSize;
-(id)initWithTileGroups:(id)arg1 ;
-(id)initWithTileGroups:(id)arg1 tileSetType:(unsigned long long)arg2 ;
-(void)setDefaultTileGroup:(SKTileGroup *)arg1 ;
-(void)setDefaultTileSize:(CGSize)arg1 ;
-(NSArray *)stamps;
-(void)setStamps:(NSArray *)arg1 ;
-(void)observeAllTileDefinitions;
-(id)findTileDefinitionForGroup:(id)arg1 withGroupAdjacency:(unsigned long long*)arg2 ;
-(id)findTileDefinitionsForGroup:(id)arg1 withGroupAdjacency:(unsigned long long*)arg2 ;
-(id)getCenterTileDefinitionForGroup:(id)arg1 withRequiredOutputGroupAdjacency:(unsigned long long*)arg2 ;
@end

