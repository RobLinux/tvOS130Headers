/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <appstored/appstored-Structs.h>
@class NSDictionary, NSMutableArray, SQLiteStatement;

@interface SQLiteCursor : NSObject {

	int _columnCount;
	unsigned char* _columnDeclaredTypes;
	NSDictionary* _columnIndexByName;
	id _columnKeySet;
	NSMutableArray* _columnNames;
	sqlite3_stmtRef _statement;
	SQLiteStatement* _statementWrapper;

}

@property (nonatomic,readonly) long long numberOfColumns; 
-(void)dealloc;
-(id)initWithStatement:(id)arg1 ;
-(long long)numberOfColumns;
-(long long)int64ForColumnIndex:(int)arg1 ;
-(id)stringForColumnIndex:(int)arg1 ;
-(id)numberForColumnIndex:(int)arg1 ;
-(int)intForColumnIndex:(int)arg1 ;
-(id)dataForColumnIndex:(int)arg1 ;
-(double)doubleForColumnIndex:(int)arg1 ;
-(id)stringForColumnName:(id)arg1 ;
-(id)dataForColumnName:(id)arg1 ;
-(double)doubleForColumnName:(id)arg1 ;
-(int)intForColumnName:(id)arg1 ;
-(long long)int64ForColumnName:(id)arg1 ;
-(id)numberForColumnName:(id)arg1 ;
-(int)columnIndexForColumnName:(id)arg1 ;
-(id)dateForColumnIndex:(int)arg1 ;
-(id)URLForColumnIndex:(int)arg1 ;
-(id)dateForColumnName:(id)arg1 ;
-(id)URLForColumnName:(id)arg1 ;
-(int)_columnTypeForColumnIndex:(int)arg1 ;
-(id)dictionaryWithValuesForColumnNames:(id)arg1 ;
-(id)UUIDForColumnIndex:(int)arg1 ;
-(id)JSONObjectForColumnIndex:(int)arg1 ;
-(id)UUIDForColumnName:(id)arg1 ;
-(id)dictionaryWithValuesForColumns;
-(unsigned char)_declaredTypeForColumnIndex:(int)arg1 ;
@end

