/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFConversationDelegate, AFConversationStorable;
@class NSMutableDictionary, NSUUID, NSString, AFTreeNode;

@interface AFConversation : NSObject {

	NSMutableDictionary* _additionalInterpretationsForRefId;
	NSMutableDictionary* _updatedUserUtteranceForRefId;
	BOOL _synchronizedWithServer;
	NSUUID* _identifier;
	NSString* _languageCode;
	id<AFConversationDelegate> _delegate;
	AFTreeNode* _rootNode;
	id<AFConversationStorable> _lastRestoredItem;

}

@property (setter=_setRootNode:,getter=_rootNode,nonatomic,retain) AFTreeNode * rootNode;                           //@synthesize rootNode=_rootNode - In the implementation block
@property (setter=_setLastRestoredItem:,nonatomic,retain) id<AFConversationStorable> lastRestoredItem;              //@synthesize lastRestoredItem=_lastRestoredItem - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier;                                                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * languageCode;                                                        //@synthesize languageCode=_languageCode - In the implementation block
@property (assign,getter=isSynchronizedWithServer,nonatomic) BOOL synchronizedWithServer;                           //@synthesize synchronizedWithServer=_synchronizedWithServer - In the implementation block
@property (assign,nonatomic,__weak) id<AFConversationDelegate> delegate;                                            //@synthesize delegate=_delegate - In the implementation block
-(id<AFConversationDelegate>)delegate;
-(void)setDelegate:(id<AFConversationDelegate>)arg1 ;
-(NSString *)languageCode;
-(NSUUID *)identifier;
-(id)_rootNode;
-(id)lastItem;
-(void)_enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithLanguageCode:(id)arg1 ;
-(id)propertyListRepresentation;
-(id)initWithPropertyListRepresentation:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 languageCode:(id)arg2 rootNode:(id)arg3 ;
-(id)initWithIdentifier:(id)arg1 languageCode:(id)arg2 ;
-(id)_nodeAtIndexPath:(id)arg1 ;
-(BOOL)_nodeContainsProvisionalItems:(id)arg1 ;
-(id)_childOfNode:(id)arg1 withItemWhichCanBeUpdatedWithAceObject:(id)arg2 inDialogPhase:(id)arg3 ;
-(void)_changePresentationStateForNodes:(id)arg1 ;
-(void)_removeNodes:(id)arg1 ;
-(void)_processInsertions:(id)arg1 inDialogPhase:(id)arg2 ;
-(id)indexPathForItemWithIdentifier:(id)arg1 ;
-(long long)numberOfChildrenForItemAtIndexPath:(id)arg1 ;
-(id)_indexPathsForAddingItemsWithCount:(long long)arg1 asChildrenOfItemWithIdentifier:(id)arg2 ;
-(void)_addItemsForAceObjects:(id)arg1 type:(long long)arg2 aceCommandIdentifier:(id)arg3 dialogPhase:(id)arg4 asChildrenOfItemWithIdentifier:(id)arg5 ;
-(void)addItemsForAceObjects:(id)arg1 type:(long long)arg2 dialogPhase:(id)arg3 asChildrenOfItemWithIdentifier:(id)arg4 ;
-(void)addItemsForAceViews:(id)arg1 withDialogPhase:(id)arg2 asChildrenOfItemWithIdentifier:(id)arg3 ;
-(void)removeItemsAtIndexPaths:(id)arg1 ;
-(id)_indexPathForItemWithIdentifier:(id)arg1 ignoreNonExistent:(BOOL)arg2 ;
-(id)_itemAtIndexPath:(id)arg1 ;
-(void)_didChangePresentationStateForItemAtIndexPaths:(id)arg1 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(BOOL)isSynchronizedWithServer;
-(void)setSynchronizedWithServer:(BOOL)arg1 ;
-(void)insertItemsForAceViews:(id)arg1 withDialogPhase:(id)arg2 atIndexPaths:(id)arg3 ;
-(void)addItemsForAddViewsCommand:(id)arg1 ;
-(void)addItemForSpeechRecognizedCommand:(id)arg1 ;
-(void)addAdditionalSpeechInterpretation:(id)arg1 refId:(id)arg2 ;
-(id)additionalSpeechInterpretationsForRefId:(id)arg1 ;
-(void)addRecognitionUpdateWithPhrases:(id)arg1 utterances:(id)arg2 refId:(id)arg3 ;
-(id)updatedUserUtteranceForRefId:(id)arg1 ;
-(void)addItemForPartialResultCommand:(id)arg1 ;
-(void)addItemsForShowHelpCommand:(id)arg1 ;
-(void)addItemForMusicStartSessionCommand:(id)arg1 ;
-(void)addSelectionResponse:(id)arg1 ;
-(void)updateWithUpdateViewsCommand:(id)arg1 ;
-(void)removeItemsWithIdentifiers:(id)arg1 ;
-(void)removeItemsFollowingItemAtIndexPath:(id)arg1 ;
-(void)cancelItemWithIdentifier:(id)arg1 ;
-(BOOL)containsItemWithIdentifier:(id)arg1 ;
-(id)identifierOfItemAtIndexPath:(id)arg1 ;
-(BOOL)hasItemWithIdentifier:(id)arg1 ;
-(id)itemWithIdentifier:(id)arg1 ;
-(id)parentOfItemWithIdentifier:(id)arg1 ;
-(long long)typeForItemAtIndexPath:(id)arg1 ;
-(id)dialogPhaseForItemAtIndexPath:(id)arg1 ;
-(id)aceObjectForItemAtIndexPath:(id)arg1 ;
-(long long)presentationStateForItemAtIndexPath:(id)arg1 ;
-(long long)numberOfChildrenForItemWithIdentifier:(id)arg1 ;
-(id)aceCommandIdentifierForItemAtIndexPath:(id)arg1 ;
-(BOOL)itemAtIndexPathIsVirgin:(id)arg1 ;
-(BOOL)containsItemForAceViewWithIdentifier:(id)arg1 ;
-(void)_setRootNode:(id)arg1 ;
-(id<AFConversationStorable>)lastRestoredItem;
-(void)_setLastRestoredItem:(id)arg1 ;
@end

