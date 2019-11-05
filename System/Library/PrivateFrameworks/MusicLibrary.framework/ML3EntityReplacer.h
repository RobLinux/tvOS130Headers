/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@class NSMutableArray, ML3DatabaseConnection, ML3MusicLibrary;

@interface ML3EntityReplacer : NSObject {

	CFDictionaryRef _propertyToIndexPair;
	NSMutableArray* _naturalStatements;
	ML3DatabaseConnection* _connection;
	ML3MusicLibrary* _library;

}

@property (getter=isOpen,nonatomic,readonly) BOOL open; 
-(void)dealloc;
-(void)close;
-(BOOL)isOpen;
-(BOOL)perform;
-(void)bindValue:(id)arg1 forProperty:(id)arg2 ;
-(id)initWithEntityClass:(Class)arg1 properties:(id)arg2 library:(id)arg3 ;
-(void)bindNullForProperty:(id)arg1 ;
-(void)bindInt:(int)arg1 forProperty:(id)arg2 ;
-(void)bindDouble:(double)arg1 forProperty:(id)arg2 ;
-(void)bindPersistentID:(long long)arg1 ;
-(void)clearBindings;
@end

