/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNContactChangesObserver.h>
#import <ContactsUI/CNContactDataSource.h>

@protocol CNContactDataSourceDelegate;
@class NSArray, NSString, NSDictionary, CNContactStore, CNContactFilter, CNContact, CNContactFormatter, NSMutableArray, NSMapTable;

@interface CNContactCustomDataSource : NSObject <CNContactChangesObserver, CNContactDataSource> {

	BOOL _autoUpdateContacts;
	BOOL _observingContacts;
	id<CNContactDataSourceDelegate> delegate;
	CNContactFilter* _filter;
	NSMutableArray* _allContacts;
	NSArray* _keysToFetch;
	NSMapTable* _identifiersToIndexes;
	NSArray* _filteredContacts;

}

@property (nonatomic,retain) NSMutableArray * allContacts;                                                 //@synthesize allContacts=_allContacts - In the implementation block
@property (nonatomic,retain) NSArray * keysToFetch;                                                        //@synthesize keysToFetch=_keysToFetch - In the implementation block
@property (nonatomic,retain) NSMapTable * identifiersToIndexes;                                            //@synthesize identifiersToIndexes=_identifiersToIndexes - In the implementation block
@property (nonatomic,retain) NSArray * filteredContacts;                                                   //@synthesize filteredContacts=_filteredContacts - In the implementation block
@property (assign,nonatomic) BOOL observingContacts;                                                       //@synthesize observingContacts=_observingContacts - In the implementation block
@property (assign,nonatomic) BOOL autoUpdateContacts;                                                      //@synthesize autoUpdateContacts=_autoUpdateContacts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * contacts; 
@property (nonatomic,readonly) NSString * meContactIdentifier; 
@property (nonatomic,readonly) NSDictionary * contactMatchInfos; 
@property (nonatomic,readonly) NSArray * sections; 
@property (nonatomic,readonly) NSArray * indexSections; 
@property (assign,nonatomic,__weak) id<CNContactDataSourceDelegate> delegate; 
@property (nonatomic,readonly) BOOL canReload; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) CNContactStore * store; 
@property (nonatomic,copy) CNContactFilter * filter;                                                       //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) CNContactFilter * effectiveFilter; 
@property (nonatomic,readonly) CNContact * meContact; 
@property (nonatomic,retain) CNContactFormatter * contactFormatter; 
@property (nonatomic,readonly) BOOL shouldReturnToAccountsAndGroupsViewAfterSearchIsCanceled; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id<CNContactDataSourceDelegate>)delegate;
-(void)setDelegate:(id<CNContactDataSourceDelegate>)arg1 ;
-(CNContactFilter *)filter;
-(void)setFilter:(CNContactFilter *)arg1 ;
-(NSArray *)sections;
-(NSArray *)indexSections;
-(NSArray *)contacts;
-(id)initWithContacts:(id)arg1 ;
-(NSArray *)keysToFetch;
-(NSMutableArray *)allContacts;
-(void)setKeysToFetch:(NSArray *)arg1 ;
-(void)contactDidChange:(id)arg1 ;
-(BOOL)canReload;
-(id)indexPathForContact:(id)arg1 ;
-(id)completeContactFromContact:(id)arg1 fromMainStoreOnly:(BOOL)arg2 keysToFetch:(id)arg3 ;
-(NSString *)meContactIdentifier;
-(id)initWithContacts:(id)arg1 keysToFetch:(id)arg2 ;
-(void)setAutoUpdateContacts:(BOOL)arg1 ;
-(NSDictionary *)contactMatchInfos;
-(id)initWithContacts:(id)arg1 keysToFetch:(id)arg2 filter:(id)arg3 ;
-(void)setAllContacts:(NSMutableArray *)arg1 ;
-(void)setIdentifiersToIndexes:(NSMapTable *)arg1 ;
-(void)_stopObservingContacts;
-(NSArray *)filteredContacts;
-(void)_updateFilter;
-(void)setFilteredContacts:(NSArray *)arg1 ;
-(void)_updateContactsObserving;
-(void)_startObservingContacts;
-(NSMapTable *)identifiersToIndexes;
-(void)_sendDataSourceDidChange;
-(CNContactFilter *)effectiveFilter;
-(BOOL)autoUpdateContacts;
-(BOOL)observingContacts;
-(void)setObservingContacts:(BOOL)arg1 ;
@end

