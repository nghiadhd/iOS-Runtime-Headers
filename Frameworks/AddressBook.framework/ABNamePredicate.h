/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABNamePredicate : ABPredicate {
    void * _addressBook;
    BOOL  _generateExceprts;
    NSArray * _groups;
    BOOL  _matchPersonOrCompanyNamesExclusively;
    BOOL  _matchPreferredName;
    BOOL  _matchWholeWords;
    NSString * _name;
    NSArray * _scopedContactIdentifiers;
    NSArray * _sources;
    struct __CFArray { } * _tokenizationSortKeys;
    void * _tokenizations;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic) void*addressBook;
@property (nonatomic) BOOL generateExceprts;
@property (nonatomic) void*group;
@property (nonatomic, retain) NSArray *groups;
@property (nonatomic) BOOL matchPersonOrCompanyNamesExclusively;
@property (nonatomic) BOOL matchPreferredName;
@property (nonatomic) BOOL matchWholeWords;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSArray *scopedContactIdentifiers;
@property (nonatomic) void*source;
@property (nonatomic, retain) NSArray *sources;

- (id)_matchClauseForColumns:(id)arg1 requiringAllTerms:(BOOL)arg2;
- (id)_personNameKeys;
- (id)_personNonNameKeys;
- (void)ab_bindJoinClauseComponentOfStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; double x3; }*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3;
- (void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; double x3; }*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3;
- (id)ab_metadataForMatchingRow:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; double x3; }*)arg1 columnOffset:(int)arg2;
- (id)accountIdentifier;
- (void*)addressBook;
- (void)dealloc;
- (id)emphasizedExcerptStringForMatchString:(id)arg1;
- (BOOL)generateExceprts;
- (void*)group;
- (id)groups;
- (id)init;
- (BOOL)isValid;
- (BOOL)matchPersonOrCompanyNamesExclusively;
- (BOOL)matchPreferredName;
- (BOOL)matchWholeWords;
- (id)name;
- (id)predicateFormat;
- (id)queryJoinsInCompound:(BOOL)arg1 predicateIdentifier:(int)arg2;
- (id)queryRankStringForPredicateIdentifier:(int)arg1;
- (id)querySelectPropertiesForPredicateIdentifier:(int)arg1;
- (id)queryWhereStringForPredicateIdentifier:(int)arg1;
- (id)scopedContactIdentifiers;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAddressBook:(void*)arg1;
- (void)setGenerateExceprts:(BOOL)arg1;
- (void)setGroup:(void*)arg1;
- (void)setGroups:(id)arg1;
- (void)setMatchPersonOrCompanyNamesExclusively:(BOOL)arg1;
- (void)setMatchPreferredName:(BOOL)arg1;
- (void)setMatchWholeWords:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setScopedContactIdentifiers:(id)arg1;
- (void)setSource:(void*)arg1;
- (void)setSources:(id)arg1;
- (void*)source;
- (id)sources;
- (void*)tokenizations;

@end
