/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/DKDAAPParserDelegate.h>

@class NSString, NSMutableDictionary;

@interface SagaImportControllerParserDelegate : NSObject <DKDAAPParserDelegate> {

	BOOL _shouldRestart;
	unsigned _totalItemCount;
	unsigned _currentItemCount;
	unsigned _processedItemCount;
	NSString* _currentPaginationToken;
	long long _currentCloudID;
	NSString* _currentLyricsToken;
	NSMutableDictionary* _mutableCloudIDToLyricsTokenMap;

}

@property (nonatomic,readonly) BOOL shouldRestart;                                              //@synthesize shouldRestart=_shouldRestart - In the implementation block
@property (nonatomic,readonly) unsigned totalItemCount;                                         //@synthesize totalItemCount=_totalItemCount - In the implementation block
@property (nonatomic,readonly) unsigned currentItemCount;                                       //@synthesize currentItemCount=_currentItemCount - In the implementation block
@property (nonatomic,readonly) unsigned processedItemCount;                                     //@synthesize processedItemCount=_processedItemCount - In the implementation block
@property (nonatomic,readonly) NSString * currentPaginationToken;                               //@synthesize currentPaginationToken=_currentPaginationToken - In the implementation block
@property (nonatomic,readonly) long long currentCloudID;                                        //@synthesize currentCloudID=_currentCloudID - In the implementation block
@property (nonatomic,readonly) NSString * currentLyricsToken;                                   //@synthesize currentLyricsToken=_currentLyricsToken - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mutableCloudIDToLyricsTokenMap;              //@synthesize mutableCloudIDToLyricsTokenMap=_mutableCloudIDToLyricsTokenMap - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)parserDidStart:(id)arg1 ;
-(BOOL)parser:(id)arg1 shouldParseCode:(unsigned)arg2 ;
-(BOOL)parser:(id)arg1 shouldParseCodeAsContainer:(unsigned)arg2 ;
-(void)parser:(id)arg1 didStartContainerCode:(unsigned)arg2 contentLength:(unsigned)arg3 ;
-(void)parser:(id)arg1 didParseDataCode:(unsigned)arg2 bytes:(char*)arg3 contentLength:(unsigned)arg4 ;
-(void)parser:(id)arg1 didEndContainerCode:(unsigned)arg2 ;
-(unsigned)totalItemCount;
-(BOOL)shouldRestart;
-(NSString *)currentPaginationToken;
-(unsigned)processedItemCount;
-(unsigned)currentItemCount;
-(long long)currentCloudID;
-(void)setMutableCloudIDToLyricsTokenMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)mutableCloudIDToLyricsTokenMap;
-(NSString *)currentLyricsToken;
@end
