/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class REScriptSymbolTable;

@interface REScriptASTObjectBuilder : NSObject {

	REScriptSymbolTable* _table;

}

@property (nonatomic,readonly) REScriptSymbolTable * table;              //@synthesize table=_table - In the implementation block
-(REScriptSymbolTable *)table;
-(id)buildObjectWithIdentifierNode:(id)arg1 error:(id*)arg2 ;
-(id)buildObjectWithLiteralNode:(id)arg1 error:(id*)arg2 ;
-(id)buildObjectWithExpressionNode:(id)arg1 error:(id*)arg2 ;
-(id)buildObjectWithPrefixExpressionNode:(id)arg1 error:(id*)arg2 ;
-(id)buildObjectWithFunctionNode:(id)arg1 error:(id*)arg2 ;
-(id)buildObjectWithMemberExpressionNode:(id)arg1 error:(id*)arg2 ;
-(id)buildObjectWithSubscriptExpressionNode:(id)arg1 error:(id*)arg2 ;
-(id)buildObjectWithTopLevelBinaryExpression:(id)arg1 error:(id*)arg2 ;
-(id)buildObjectWithTopLevelBinaryExpressionListNode:(id)arg1 error:(id*)arg2 ;
-(id)_errorForUnsupportedNode:(id)arg1 ;
-(id)buildObjectWithNode:(id)arg1 error:(id*)arg2 ;
-(id)buildObjectWithBinaryExpressionListNode:(id)arg1 previousExpression:(id)arg2 error:(id*)arg3 ;
-(id)buildObjectWithBinaryExpressionNode:(id)arg1 previousExpression:(id)arg2 error:(id*)arg3 ;
-(id)objectTypeErrorDescription;
-(id)initWithTable:(id)arg1 ;
@end

