/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDOfficeArt, NSMutableString, WDParagraphProperties, WDCharacterProperties;



@interface WDListLevel : NSObject 
{
    WDParagraphProperties *mParagraphProperties;
    WDCharacterProperties *mCharacterProperties;
    WDOfficeArt *mImage;
    NSInteger mStartNumber;
    NSInteger mNumberFormat;
    BOOL mRestartNumbering;
    BOOL mLegal;
    NSInteger mSuffix;
    NSMutableString *mText;
    BOOL mLegacy;
    NSInteger mLegacySpace;
    NSInteger mLegacyIndent;
    NSInteger mJustification;
}


- (void)setText:(id)arg1;
- (void)setImage:(id)arg1;
- (id)text;
- (id)image;
- (void)dealloc;
- (void)setLegal:(BOOL)arg1;
- (void)setLegacy:(BOOL)arg1;
- (id)paragraphProperties;
- (long)startNumber;
- (BOOL)startNumberOverridden;
- (BOOL)numberFormatOverridden;
- (BOOL)imageBullet;
- (BOOL)imageBulletOverridden;
- (BOOL)restartNumbering;
- (BOOL)restartNumberingOverridden;
- (BOOL)legal;
- (BOOL)legalOverridden;
- (NSInteger)suffix;
- (BOOL)suffixOverridden;
- (BOOL)textOverridden;
- (BOOL)justificationOverridden;
- (id)initWithDocument:(id)arg1;
- (void)setRestartNumbering:(BOOL)arg1;
- (void)setStartNumber:(long)arg1;
- (void)setNumberFormat:(NSInteger)arg1;
- (void)setSuffix:(NSInteger)arg1;
- (void)setLegacySpace:(long)arg1;
- (void)setLegacyIndent:(long)arg1;
- (void)setJustification:(NSInteger)arg1;
- (long)legacyIndent;
- (long)legacySpace;
- (BOOL)legacy;
- (NSInteger)numberFormat;
- (id)characterProperties;
- (NSInteger)justification;

@end