#include "fastq_utils.h"

void fq_gz_write(gzFile out_file, std::string name, std::string qual, std::string seq) {
    std::stringstream stream;
    stream << "@" << name << "\n" <<
        seq << "\n" <<
        "+" << "\n" <<
        qual << "\n";
    gzputs(out_file, stream.str().c_str());
}

void fq_gz_write(gzFile out_file, kseq_t *seq) {
    std::stringstream stream;
    stream << "@" << seq->name.s << "\n" <<
        (seq->seq.s) << "\n" <<
        "+" << "\n" <<
        (seq->qual.s) << "\n";
    gzputs(out_file, stream.str().c_str());
}