/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VUIOrderedItemsMapDelegate;
@class NSOrderedSet, NSDictionary;

@interface VUIOrderedItemsMap : NSObject {

	long long _dataSourceType;
	id<VUIOrderedItemsMapDelegate> _delegate;
	NSOrderedSet* _orderedKeys;
	NSDictionary* _mappingDictionary;

}

@property (assign,nonatomic) long long dataSourceType;                                    //@synthesize dataSourceType=_dataSourceType - In the implementation block
@property (nonatomic,copy) NSDictionary * mappingDictionary;                              //@synthesize mappingDictionary=_mappingDictionary - In the implementation block
@property (nonatomic,copy) NSOrderedSet * orderedKeys;                                    //@synthesize orderedKeys=_orderedKeys - In the implementation block
@property (assign,nonatomic,__weak) id<VUIOrderedItemsMapDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<VUIOrderedItemsMapDelegate>)delegate;
-(void)setDelegate:(id<VUIOrderedItemsMapDelegate>)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(NSOrderedSet *)orderedKeys;
-(void)removeAll;
-(long long)dataSourceType;
-(void)setDataSourceType:(long long)arg1 ;
-(void)processEntities:(id)arg1 forDataSourceType:(long long)arg2 ;
-(void)updateEntities:(id)arg1 ;
-(id)_identifierForMediaItem:(id)arg1 withProperty:(id)arg2 ;
-(void)setOrderedKeys:(NSOrderedSet *)arg1 ;
-(void)setMappingDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)mappingDictionary;
-(void)_generateStoreIdentiferToIndexMapping:(id)arg1 generatesDifferentials:(BOOL)arg2 ;
@end

