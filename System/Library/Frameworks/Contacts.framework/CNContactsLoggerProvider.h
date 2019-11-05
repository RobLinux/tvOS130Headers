/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNContactsLoggerProvider.h>

@protocol CNContactsLoggerProvider <NSObject>
@property (nonatomic,readonly) id<CNContactsLogger> contactsLogger; 
@property (nonatomic,readonly) id<CNSpotlightIndexingLogger> spotlightIndexingLogger; 
@property (nonatomic,readonly) id<CNRegulatoryLogger> regulatoryLogger; 
@property (nonatomic,readonly) id<CNFavoritesLogger> favoritesLogger; 
@required
-(id<CNContactsLogger>)contactsLogger;
-(id<CNSpotlightIndexingLogger>)spotlightIndexingLogger;
-(id<CNRegulatoryLogger>)regulatoryLogger;
-(id<CNFavoritesLogger>)favoritesLogger;

@end


@protocol CNContactsLogger, CNSpotlightIndexingLogger, CNRegulatoryLogger, CNFavoritesLogger;
@class NSString;

@interface CNContactsLoggerProvider : NSObject <CNContactsLoggerProvider> {

	id<CNContactsLogger> _contactsLogger;
	id<CNSpotlightIndexingLogger> _spotlightIndexingLogger;
	id<CNRegulatoryLogger> _regulatoryLogger;
	id<CNFavoritesLogger> _favoritesLogger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<CNContactsLogger> contactsLogger; 
@property (nonatomic,readonly) id<CNSpotlightIndexingLogger> spotlightIndexingLogger; 
@property (nonatomic,readonly) id<CNRegulatoryLogger> regulatoryLogger; 
@property (nonatomic,readonly) id<CNFavoritesLogger> favoritesLogger; 
+(id)defaultProvider;
-(id<CNContactsLogger>)contactsLogger;
-(id<CNSpotlightIndexingLogger>)spotlightIndexingLogger;
-(id<CNRegulatoryLogger>)regulatoryLogger;
-(id<CNFavoritesLogger>)favoritesLogger;
@end

