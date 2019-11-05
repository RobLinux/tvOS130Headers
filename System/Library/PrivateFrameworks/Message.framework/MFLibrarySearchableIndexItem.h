/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, MFMailMessage, CSSearchableItem, NSData;

@interface MFLibrarySearchableIndexItem : NSObject {

	BOOL _hasCompleteBodyData;
	NSString* _identifier;
	MFMailMessage* _message;
	CSSearchableItem* _searchableItem;
	long long _indexingType;
	NSData* _bodyData;

}

@property (nonatomic,copy,readonly) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * domainIdentifier; 
@property (nonatomic,retain,readonly) MFMailMessage * message;                        //@synthesize message=_message - In the implementation block
@property (nonatomic,retain,readonly) CSSearchableItem * searchableItem;              //@synthesize searchableItem=_searchableItem - In the implementation block
@property (assign,nonatomic) long long indexingType;                                  //@synthesize indexingType=_indexingType - In the implementation block
@property (nonatomic,retain) NSData * bodyData;                                       //@synthesize bodyData=_bodyData - In the implementation block
@property (assign,nonatomic) BOOL hasCompleteBodyData;                                //@synthesize hasCompleteBodyData=_hasCompleteBodyData - In the implementation block
+(id)itemWithMessage:(id)arg1 bodyData:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(NSString *)domainIdentifier;
-(long long)compare:(id)arg1 ;
-(NSString *)identifier;
-(NSData *)bodyData;
-(void)setBodyData:(NSData *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(MFMailMessage *)message;
-(CSSearchableItem *)searchableItem;
-(void)setIndexingType:(long long)arg1 ;
-(id)initWithMessage:(id)arg1 bodyData:(id)arg2 ;
-(id)searchableItemWithClientState:(id)arg1 ;
-(id)fetchIndexableAttachments;
-(long long)indexingType;
-(BOOL)hasCompleteBodyData;
-(void)setHasCompleteBodyData:(BOOL)arg1 ;
@end

