/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/DKDAAPParserDelegate.h>

@class NSMutableDictionary, NSString;

@interface AddToLibraryResponseParserDelegate : NSObject <DKDAAPParserDelegate> {

	BOOL _updateRequired;
	NSMutableDictionary* _addedItems;
	unsigned long long _currentCloudID;
	unsigned long long _currentAdamID;
	NSString* _currentGlobalID;

}

@property (nonatomic,readonly) NSMutableDictionary * addedItems;               //@synthesize addedItems=_addedItems - In the implementation block
@property (nonatomic,readonly) BOOL updateRequired;                            //@synthesize updateRequired=_updateRequired - In the implementation block
@property (nonatomic,readonly) unsigned long long currentCloudID;              //@synthesize currentCloudID=_currentCloudID - In the implementation block
@property (nonatomic,readonly) unsigned long long currentAdamID;               //@synthesize currentAdamID=_currentAdamID - In the implementation block
@property (nonatomic,readonly) NSString * currentGlobalID;                     //@synthesize currentGlobalID=_currentGlobalID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)parser:(id)arg1 shouldParseCode:(unsigned)arg2 ;
-(BOOL)parser:(id)arg1 shouldParseCodeAsContainer:(unsigned)arg2 ;
-(void)parser:(id)arg1 didStartContainerCode:(unsigned)arg2 contentLength:(unsigned)arg3 ;
-(void)parser:(id)arg1 didParseDataCode:(unsigned)arg2 bytes:(char*)arg3 contentLength:(unsigned)arg4 ;
-(void)parser:(id)arg1 didEndContainerCode:(unsigned)arg2 ;
-(NSMutableDictionary *)addedItems;
-(BOOL)updateRequired;
-(unsigned long long)currentCloudID;
-(unsigned long long)currentAdamID;
-(NSString *)currentGlobalID;
@end

