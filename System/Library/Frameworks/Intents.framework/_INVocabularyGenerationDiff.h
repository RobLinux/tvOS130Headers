/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSArray, NSString;

@interface _INVocabularyGenerationDiff : NSObject {

	BOOL _isFullReset;
	NSSet* _deletedSiriIDs;
	NSArray* _updatedVocabularyItems;
	long long _countOfVocabularyItemsAfterApplying;
	NSString* _intentSlotName;
	NSString* _appBundleID;

}

@property (nonatomic,copy) NSSet * deletedSiriIDs;                                       //@synthesize deletedSiriIDs=_deletedSiriIDs - In the implementation block
@property (nonatomic,copy) NSArray * updatedVocabularyItems;                             //@synthesize updatedVocabularyItems=_updatedVocabularyItems - In the implementation block
@property (assign,nonatomic) long long countOfVocabularyItemsAfterApplying;              //@synthesize countOfVocabularyItemsAfterApplying=_countOfVocabularyItemsAfterApplying - In the implementation block
@property (assign,nonatomic) BOOL isFullReset;                                           //@synthesize isFullReset=_isFullReset - In the implementation block
@property (nonatomic,copy) NSString * intentSlotName;                                    //@synthesize intentSlotName=_intentSlotName - In the implementation block
@property (nonatomic,copy) NSString * appBundleID;                                       //@synthesize appBundleID=_appBundleID - In the implementation block
-(id)description;
-(NSString *)appBundleID;
-(BOOL)hasChanges;
-(void)setAppBundleID:(NSString *)arg1 ;
-(NSSet *)deletedSiriIDs;
-(void)setDeletedSiriIDs:(NSSet *)arg1 ;
-(NSArray *)updatedVocabularyItems;
-(void)setUpdatedVocabularyItems:(NSArray *)arg1 ;
-(long long)countOfVocabularyItemsAfterApplying;
-(void)setCountOfVocabularyItemsAfterApplying:(long long)arg1 ;
-(BOOL)isFullReset;
-(void)setIsFullReset:(BOOL)arg1 ;
-(NSString *)intentSlotName;
-(void)setIntentSlotName:(NSString *)arg1 ;
@end

